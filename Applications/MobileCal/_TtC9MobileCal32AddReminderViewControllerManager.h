//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKCalendar, MISSING_TYPE, NSString;
@protocol AddItemViewControllerManagerDelegate;

@interface _TtC9MobileCal32AddReminderViewControllerManager : NSObject
{
    MISSING_TYPE *undoManager;	// 8 = 0x8
    MISSING_TYPE *model;	// 16 = 0x10
    MISSING_TYPE *creationModule;	// 0 = 0x0
    MISSING_TYPE *initialDateComponents;	// 0 = 0x0
    MISSING_TYPE *addItemViewControllerManagerDelegate;	// 1095786335 = 0x41505f5f
    MISSING_TYPE *ignoreUnsavedChanges;	// 20306 = 0x4f52
}

- (void).cxx_destruct;	// IMP=0x0040000000190cf0
- (id)init;	// IMP=0x0010000000190c90
- (void)requestReminderSheet:(id)arg1;	// IMP=0x00100000001901f0
- (void)cancelEditing;	// IMP=0x0010000000190170
@property(nonatomic) _Bool ignoreUnsavedChanges; // @synthesize ignoreUnsavedChanges;
- (void)completeAndSaveWithContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000018ffa0
- (_Bool)willPresentDialogOnSave;	// IMP=0x001000000018fa40
- (_Bool)hasUnsavedChanges;	// IMP=0x001000000018f8f0
- (void)presentationControllerDidDismiss;	// IMP=0x001000000018f780
- (void)presentationControllerDidAttemptToDismiss;	// IMP=0x001000000018f770
- (id)confirmDismissAlertController;	// IMP=0x001000000018f740
- (_Bool)canDismiss;	// IMP=0x001000000018f130
- (void)setEditorBackgroundColor:(id)arg1;	// IMP=0x001000000018ef60
- (void)updateStateFromUI:(id)arg1;	// IMP=0x001000000018ef10
- (void)updateUIFromState:(id)arg1;	// IMP=0x001000000018e460
- (id)viewController;	// IMP=0x001000000018e070
- (id)createViewController:(id)arg1;	// IMP=0x001000000018d580
@property(nonatomic, readonly) EKCalendar *calendarToMakeVisibleOnSave;
@property(nonatomic, readonly) NSString *newItemBackButtonTitle;
@property(nonatomic, readonly) NSString *newItemTitle;
- (id)initWithModel:(id)arg1;	// IMP=0x001000000018ce30
@property(nonatomic) __weak id <AddItemViewControllerManagerDelegate> addItemViewControllerManagerDelegate; // @synthesize addItemViewControllerManagerDelegate;

@end
