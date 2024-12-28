//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage;

@interface RAPPersonalPlaceCorrectionsWhichOneQuestion
{
    long long _shortcutType;	// 24 = 0x18
    _Bool _isRefreshing;	// 32 = 0x20
    NSString *_localizedServerControlledDescription;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000620058
@property(readonly, nonatomic) long long shortcutType; // @synthesize shortcutType=_shortcutType;
@property(copy, nonatomic) NSString *localizedServerControlledDescription; // @synthesize localizedServerControlledDescription=_localizedServerControlledDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N,V_localizedServerControlledDescription

- (_Bool)_isRecursivelyComplete;	// IMP=0x001000000061ffab
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) UIImage *image;
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x001000000061fbf1
- (id)allMenuItems;	// IMP=0x001000000061fbdf
- (void)refreshMainMenuItemsWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x001000000061f6a1
- (void)_createQuestionsFromShortcuts:(id)arg1;	// IMP=0x001000000061f45c
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 shortcutType:(long long)arg3;	// IMP=0x001000000061f2c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
