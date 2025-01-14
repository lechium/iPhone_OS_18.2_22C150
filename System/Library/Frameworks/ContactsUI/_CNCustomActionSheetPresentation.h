//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _CNCustomActionSheetPresentation : NSObject
{
    UIView *_sourceView;	// 8 = 0x8
    CDUnknownBlockType _dismissHandler;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    unsigned long long _permittedArrowDirections;	// 32 = 0x20
    struct CGRect _sourceRect;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001b71e3
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;	// IMP=0x00000000001b711f
- (id)presentedViewController;	// IMP=0x00000000001b710d
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000001b6f7b
- (void)prepareForPresentationOfController:(id)arg1;	// IMP=0x00000000001b6f14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

