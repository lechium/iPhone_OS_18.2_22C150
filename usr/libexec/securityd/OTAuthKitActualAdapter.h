//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSListenerCollection;
@protocol OTAuthKitAdapterNotifier;

@interface OTAuthKitActualAdapter : NSObject
{
    CKKSListenerCollection<OTAuthKitAdapterNotifier> *_notifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001652c1
@property(retain) CKKSListenerCollection<OTAuthKitAdapterNotifier> *notifiers; // @synthesize notifiers=_notifiers;
- (void)deliverAKDeviceListDeltaMessagePayload:(id)arg1;	// IMP=0x00100000001651f3
- (void)notifyAKDeviceList:(id)arg1;	// IMP=0x0010000000165122
- (void)registerNotification:(id)arg1;	// IMP=0x0010000000164ff3
- (void)fetchCurrentDeviceListByAltDSID:(id)arg1 flowID:(id)arg2 deviceSessionID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000164c4b
- (id)machineID:(id)arg1 flowID:(id)arg2 deviceSessionID:(id)arg3 canSendMetrics:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00100000001647f9
- (_Bool)accountIsDemoAccountByAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001646d4
- (_Bool)accountIsCDPCapableByAltDSID:(id)arg1;	// IMP=0x00100000001643f3

@end

