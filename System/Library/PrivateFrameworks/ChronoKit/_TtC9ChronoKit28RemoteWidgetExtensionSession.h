//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC9ChronoKit28RemoteWidgetExtensionSession : _TtCs12_SwiftObject
{
    MISSING_TYPE *extensionIdentity;	// 16 = 0x10
    MISSING_TYPE *identifier;	// 0 = 0x0
    MISSING_TYPE *dataProtectionLevel;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *protectedDescriptors;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_loggingIdentifier;	// 0 = 0x0
}

- (void)getWidgetRelevancesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007e030
- (void)getTimelineFor:(id)arg1 into:(id)arg2 environment:(id)arg3 isPreview:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000007df70
- (void)getPlaceholdersForRequests:(id)arg1 inEnvironment:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007def0
- (void)getPlaceholdersWithEnvironment:(id)arg1 for:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007de90
- (void)getDescriptorsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007ddf0
- (void)invalidate;	// IMP=0x000000000007dda0
- (void)getActivitiesWithRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007db90
- (void)getTimelinesWithRequests:(id)arg1 isPreview:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007db40
- (void)getPlaceholdersWithRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007db10
- (void)attachPreviewAgentWithFrameworkPath:(id)arg1 endpoint:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007dab0
- (void)getControlTemplatesWithRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007da80
- (void)setControlState:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007da70
- (void)handleURLSessionEventsFor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007da60
- (void)getAllCurrentDescriptorsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d9c0
- (void)getCurrentDescriptorsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d8e0
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d800
- (void)pushTokensDidChange:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007d7c0

@end

