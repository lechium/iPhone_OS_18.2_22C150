//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString, _INUIExtensionContextState;
@protocol _INUIRemoteViewControllerServing;

__attribute__((visibility("hidden")))
@interface _INUIExtensionContext : NSExtensionContext
{
    _INUIExtensionContextState *_currentExtensionContextState;	// 8 = 0x8
    id <_INUIRemoteViewControllerServing> _viewController;	// 16 = 0x10
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00100000000063d0
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00100000000063b7
- (void).cxx_destruct;	// IMP=0x0000000000006108
@property(nonatomic) __weak id <_INUIRemoteViewControllerServing> viewController; // @synthesize viewController=_viewController;
- (void)viewWasCancelled;	// IMP=0x0000000000006090
- (void)queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006007
- (void)desiresInteractivity:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005f7e
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005e88
- (void)_willBeginEditing;	// IMP=0x0000000000005e4b
- (void)_requestHandlingOfIntent:(id)arg1;	// IMP=0x0000000000005dd5
- (id)interfaceParametersDescription;	// IMP=0x00000000000059b2
- (struct CGSize)_bestAllowedSizeForAllowedSizesDictionary:(id)arg1;	// IMP=0x00000000000059a5
- (struct CGSize)hostedViewMaximumAllowedSize;	// IMP=0x0000000000005936
- (struct CGSize)hostedViewMinimumAllowedSize;	// IMP=0x00000000000058c7
- (void)setExtensionContextState:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000586c
- (id)_errorHandlingHostProxy;	// IMP=0x0000000000005815
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x0000000000005777

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

