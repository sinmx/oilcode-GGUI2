//-----------------------------------------------------------------------------
#ifndef _SoBitFlag_h_
#define _SoBitFlag_h_
//-----------------------------------------------------------------------------
//for example
//enum eDisableReasonForShortcut
//{
//	DisableReasonForShortcut_1 = 0x00000001,
//	DisableReasonForShortcut_2 = 0x00000002,
//	DisableReasonForShortcut_3 = 0x00000004,
//	DisableReasonForShortcut_4 = 0x00000008,
//};
//-----------------------------------------------------------------------------
class SoBitFlag
{
public:
	SoBitFlag();

	void AddFlag(unsigned int theFlag);
	void RemoveFlag(unsigned int theFlag);
	void Clear();

	bool IsZero() const;
	bool IsFlagExist(unsigned int theFlag) const;

private:
	unsigned int m_uiValue;
};
//-----------------------------------------------------------------------------
inline SoBitFlag::SoBitFlag()
{
	m_uiValue = 0;
}
//-----------------------------------------------------------------------------
inline void SoBitFlag::AddFlag(unsigned int theFlag)
{
	m_uiValue = m_uiValue | theFlag;
}
//-----------------------------------------------------------------------------
inline void SoBitFlag::RemoveFlag(unsigned int theFlag)
{
	m_uiValue = m_uiValue & (~theFlag);
}
//-----------------------------------------------------------------------------
inline void SoBitFlag::Clear()
{
	m_uiValue = 0;
}
//-----------------------------------------------------------------------------
inline bool SoBitFlag::IsZero() const
{
	return (m_uiValue == 0);
}
//-----------------------------------------------------------------------------
inline bool SoBitFlag::IsFlagExist(unsigned int theFlag) const
{
	return (m_uiValue & theFlag) != 0;
}
//-----------------------------------------------------------------------------
#endif //_SoBitFlag_h_
//-----------------------------------------------------------------------------
