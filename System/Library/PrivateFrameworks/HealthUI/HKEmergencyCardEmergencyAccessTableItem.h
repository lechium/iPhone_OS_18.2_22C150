//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKEmergencyCardEnabledTableItem, HKEmergencyCardFooterTableItem, HKEmergencyCardShareInfoTableItem, UITableViewCell;

__attribute__((visibility("hidden")))
@interface HKEmergencyCardEmergencyAccessTableItem
{
    UITableViewCell *_lastDequeuedAddContactCell;	// 8 = 0x8
    HKEmergencyCardShareInfoTableItem *_shareInfoTableItem;	// 16 = 0x10
    HKEmergencyCardEnabledTableItem *_enabledTableItem;	// 24 = 0x18
    HKEmergencyCardFooterTableItem *_enabledFooterItem;	// 32 = 0x20
    HKEmergencyCardFooterTableItem *_shareInfoFooterItem;	// 40 = 0x28
    _Bool _showsShowWhenLockedState;	// 48 = 0x30
    _Bool _showsEmergencyAccessState;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x0000000000182f30
@property(nonatomic) _Bool showsEmergencyAccessState; // @synthesize showsEmergencyAccessState=_showsEmergencyAccessState;
@property(nonatomic) _Bool showsShowWhenLockedState; // @synthesize showsShowWhenLockedState=_showsShowWhenLockedState;
- (id)titleForHeader;	// IMP=0x0000000000182e7d
- (id)viewOnlyTitle;	// IMP=0x0000000000182e6b
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;	// IMP=0x0000000000182e65
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;	// IMP=0x0000000000182e54
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;	// IMP=0x0000000000182cad
- (struct UIEdgeInsets)separatorInset;	// IMP=0x0000000000182c9a
- (_Bool)hasPresentableData;	// IMP=0x0000000000182c92
- (void)setIsSecondaryProfile:(_Bool)arg1;	// IMP=0x0000000000182c0a
- (id)initInEditMode:(_Bool)arg1 shouldShowLocked:(_Bool)arg2 shouldShareInfo:(_Bool)arg3;	// IMP=0x00000000001828c0

@end

