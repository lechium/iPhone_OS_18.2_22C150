//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerEncodingThread : HAP2LoggingObject
{
    unsigned long long _encodingFeatures;	// 8 = 0x8
    NSString *_accessoryDescription;	// 16 = 0x10
}

+ (id)_parseShortFormUUID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000056357
- (void).cxx_destruct;	// IMP=0x00000000000513ed
@property(readonly, nonatomic) unsigned long long encodingFeatures; // @synthesize encodingFeatures=_encodingFeatures;
@property(readonly, copy) NSString *description;
- (id)_parseTopLevelAttributeDatabaseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005103c
- (id)_parseServiceList:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050dd9
- (id)_parseCharacteristics:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050b76
- (id)_parseCharacteristicMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050481
- (id)eventsForData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004fcfc
- (id)requestToListPairingsWithCharacteristic:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004fb84
- (id)requestToAddPairing:(id)arg1 characteristic:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004fa06
- (id)requestToRemovePairing:(id)arg1 characteristic:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004f85e
- (id)unpairedIdentifyRequestWithError:(id *)arg1;	// IMP=0x000000000004f830
- (id)responseForRequest:(id)arg1 bodyData:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004eb35
- (id)_parseCharacteristicResponsesWithBodyData:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004e3c1
- (id)notificationRequestsForCharacteristics:(id)arg1 type:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000004e0a9
- (id)executeWriteRequestForCharacteristics:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ded3
- (id)prepareWriteRequestForCharacteristics:(id)arg1 ttl:(double)arg2 error:(id *)arg3;	// IMP=0x000000000004dcfd
- (id)writeRequestForCharacteristics:(id)arg1 shouldEncrypt:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000004daaf
- (id)groupingsForWriteRequestsForCharacteristics:(id)arg1;	// IMP=0x000000000004d848
- (id)readRequestForCharacteristics:(id)arg1 shouldEncrypt:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000004d6ae
- (id)groupingsForReadRequestsForCharacteristics:(id)arg1;	// IMP=0x000000000004d55d
- (id)readRequestForAttributeDatabaseWithEncryption:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000004d4cf
- (id)decodeBodyData:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000004d3e2
- (id)encodeBodyValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000004d352
- (id)initWithEncodingFeatures:(unsigned long long)arg1 accessoryDescription:(id)arg2;	// IMP=0x000000000004d2d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
