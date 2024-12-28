//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CORapportTransport, NSString, NSUUID, RPCompanionLinkDevice;

__attribute__((visibility("hidden")))
@interface CORapportDevice : NSObject
{
    NSString *_IDSIdentifier;	// 8 = 0x8
    CDUnknownBlockType _companionLinkProvider;	// 16 = 0x10
    RPCompanionLinkDevice *_device;	// 24 = 0x18
    NSUUID *_HomeKitIdentifier;	// 32 = 0x20
    CORapportTransport *_sourceTransport;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002845e
@property(readonly, retain, nonatomic) CORapportTransport *sourceTransport; // @synthesize sourceTransport=_sourceTransport;
@property(retain, nonatomic) NSUUID *HomeKitIdentifier; // @synthesize HomeKitIdentifier=_HomeKitIdentifier;
@property(readonly, nonatomic) RPCompanionLinkDevice *device; // @synthesize device=_device;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002842e
- (_Bool)requiresInquiry;	// IMP=0x0000000000028426
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000282d9
- (_Bool)hasSameBackingDeviceAs:(id)arg1;	// IMP=0x0000000000028248
- (id)newTransportWithExecutionContext:(id)arg1;	// IMP=0x00000000000281b2
- (_Bool)producesElectionCapableTransport;	// IMP=0x0000000000028144
@property(copy, nonatomic) CDUnknownBlockType companionLinkProvider; // @synthesize companionLinkProvider=_companionLinkProvider;
@property(readonly, copy, nonatomic) NSString *IDSIdentifier; // @synthesize IDSIdentifier=_IDSIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithCompanionLinkDevice:(id)arg1 sourceTransport:(id)arg2;	// IMP=0x0000000000027b2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
