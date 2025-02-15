//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject;
@protocol PXAnonymousViewController, PXGadget, PXGadgetDelegate, PXPresentationEnvironment;

@protocol PXGadgetDelegate <NSObject>
- (id <PXPresentationEnvironment>)presentationEnvironmentForGadget:(id <PXGadget>)arg1;
- (void)dismissGadgetViewController:(NSObject<PXAnonymousViewController> *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)presentGadgetViewController:(NSObject<PXAnonymousViewController> *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (_Bool)gadget:(id <PXGadget>)arg1 transitionToViewController:(NSObject<PXAnonymousViewController> *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;

@optional
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<PXGadgetDelegate>",?,W,N

- (void)gadget:(id <PXGadget>)arg1 didChange:(unsigned long long)arg2;
- (void)gadget:(id <PXGadget>)arg1 animateChanges:(void (^)(void))arg2;
- (NSObject<PXAnonymousViewController> *)gadgetViewControllerHostingGadget:(id <PXGadget>)arg1;
@end

