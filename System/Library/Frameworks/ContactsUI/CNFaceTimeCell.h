//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNActionMenuHelper, CNActionView, CNContact, CNContactActionsController, CNUIUserActionListDataSource, NSArray, NSDictionary, NSString, UIContextMenuInteraction, UILabel;
@protocol CNCustomPresentation, CNPropertyCellDelegate, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNFaceTimeCell
{
    _Bool _isFaceTimeAudioAvailable;	// 8 = 0x8
    CNUIUserActionListDataSource *_actionsDataSource;	// 16 = 0x10
    id <CNPropertyCellDelegate> _delegate;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
    UILabel *_faceTimeLabel;	// 40 = 0x28
    CNActionView *_actionView1;	// 48 = 0x30
    CNActionView *_actionView2;	// 56 = 0x38
    NSArray *_supportedActionTypes;	// 64 = 0x40
    id <CNCustomPresentation> _actionsControllerPresentation;	// 72 = 0x48
    CNContactActionsController *_actionsController;	// 80 = 0x50
    CNActionMenuHelper *_actionMenuHelper;	// 88 = 0x58
    UIContextMenuInteraction *_contextMenuInteraction;	// 96 = 0x60
    NSArray *_tokens;	// 104 = 0x68
    id <CNSchedulerProvider> _schedulerProvider;	// 112 = 0x70
    double _throttleDelay;	// 120 = 0x78
    NSDictionary *_defaultActionPerType;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000001ae946
@property(copy, nonatomic) NSDictionary *defaultActionPerType; // @synthesize defaultActionPerType=_defaultActionPerType;
@property(readonly, nonatomic) double throttleDelay; // @synthesize throttleDelay=_throttleDelay;
@property(retain, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(retain, nonatomic) CNActionMenuHelper *actionMenuHelper; // @synthesize actionMenuHelper=_actionMenuHelper;
@property(retain, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) id <CNCustomPresentation> actionsControllerPresentation; // @synthesize actionsControllerPresentation=_actionsControllerPresentation;
@property(retain, nonatomic) NSArray *supportedActionTypes; // @synthesize supportedActionTypes=_supportedActionTypes;
@property(readonly, nonatomic) CNActionView *actionView2; // @synthesize actionView2=_actionView2;
@property(readonly, nonatomic) CNActionView *actionView1; // @synthesize actionView1=_actionView1;
@property(nonatomic) _Bool isFaceTimeAudioAvailable; // @synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable;
@property(readonly, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource; // @synthesize actionsDataSource=_actionsDataSource;
- (_Bool)actionViewShouldPresentDisambiguationUI:(id)arg1;	// IMP=0x00000000001ae768
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;	// IMP=0x00000000001ae5b8
- (void)didSelectActionType:(id)arg1 withSourceView:(id)arg2 longPress:(_Bool)arg3;	// IMP=0x00000000001ae410
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;	// IMP=0x00000000001ae1ce
- (void)performAction:(id)arg1;	// IMP=0x00000000001adf2e
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;	// IMP=0x00000000001adbde
- (void)updateHorizontalTouchAreas;	// IMP=0x00000000001adac3
- (void)tintColorDidChange;	// IMP=0x00000000001adabd
- (id)variableConstraints;	// IMP=0x00000000001ad739
- (id)constantConstraints;	// IMP=0x00000000001ad5aa
- (id)rightMostView;	// IMP=0x00000000001ad598
- (double)minCellHeight;	// IMP=0x00000000001ad58a
- (void)performDefaultAction;	// IMP=0x00000000001ad4bb
- (id)labelView;	// IMP=0x00000000001ad3e1
- (id)actionViewForType:(id)arg1;	// IMP=0x00000000001ad2e6
- (void)processModels:(id)arg1;	// IMP=0x00000000001ad16a
- (id)allModelsObservable;	// IMP=0x00000000001ad000
- (void)discoverAvailableActionTypes;	// IMP=0x00000000001acb15
- (void)loadCachedActions;	// IMP=0x00000000001aca1e
- (void)reset;	// IMP=0x00000000001aca05
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001ac35c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

