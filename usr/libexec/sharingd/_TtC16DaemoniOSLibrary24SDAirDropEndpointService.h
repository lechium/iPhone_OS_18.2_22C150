//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16DaemoniOSLibrary24SDAirDropEndpointService : NSObject
{
    MISSING_TYPE *deviceStatus;	// 8 = 0x8
    MISSING_TYPE *nearbyAgent;	// 16 = 0x10
    MISSING_TYPE *bleController;	// 24 = 0x18
    MISSING_TYPE *applicationServiceBrowser;	// 32 = 0x20
    MISSING_TYPE *bonjourBrowser;	// 40 = 0x28
    MISSING_TYPE *classroomBrowser;	// 48 = 0x30
    MISSING_TYPE *sessionID;	// 0 = 0x0
    MISSING_TYPE *allDiscoveredEndpoints;	// 0 = 0x0
    MISSING_TYPE *allDiscovered;	// 0 = 0x0
    MISSING_TYPE *browseClientIDs;	// 0 = 0x0
    MISSING_TYPE *displayableIDs;	// 0 = 0x0
    MISSING_TYPE *connectableByDisplayableID;	// 0 = 0x0
    MISSING_TYPE *transferringConnectables;	// 0 = 0x0
    MISSING_TYPE *receivingDisplayables;	// 0 = 0x0
    MISSING_TYPE *delegateByConnectableID;	// 0 = 0x0
    MISSING_TYPE *bonjourDiscoveryContinuations;	// 0 = 0x0
    MISSING_TYPE *sessionLogger;	// 0 = 0x0
    MISSING_TYPE *endpointsChangedHandler;	// 1769300575 = 0x6975625f
    MISSING_TYPE *delegate;	// 1163157343 = 0x45545f5f
}

- (void).cxx_destruct;	// IMP=0x004000000041db10
- (id)init;	// IMP=0x001000000041dab0
- (void)screenStateChangedWithNotification:(id)arg1;	// IMP=0x001000000041da30
- (void)nearFieldDidTap;	// IMP=0x001000000041d660
- (void)removeClientWithToken:(id)arg1;	// IMP=0x001000000040e660
- (id)addClient:(id)arg1;	// IMP=0x001000000040e0b0
@property(nonatomic, copy) CDUnknownBlockType endpointsChangedHandler;

@end
