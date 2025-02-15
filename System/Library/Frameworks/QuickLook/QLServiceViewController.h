//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface QLServiceViewController : UIViewController
{
    _Bool _isAccessoryView;	// 8 = 0x8
    UIViewController *_mainViewController;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
}

+ (id)_getServiceWithUUID:(id)arg1;	// IMP=0x006000000003e223
+ (id)_serviceViewControllers;	// IMP=0x006000000003e1be
- (void).cxx_destruct;	// IMP=0x000000000003e45f
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)_registerServiceViewController;	// IMP=0x000000000003e3f6
- (void)_configurePreviewCollectionViewController;	// IMP=0x000000000003dde5
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;	// IMP=0x000000000003dc30
- (void)invalidateService;	// IMP=0x000000000003da4d
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003d9d5
@property(readonly) __weak UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (id)init;	// IMP=0x000000000003d928

@end

