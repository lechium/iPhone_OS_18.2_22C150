//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HAP2EncodedRequest;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerControllerTimedWriteOperation
{
    id <HAP2EncodedRequest> _executeRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000071a7d
@property(readonly, nonatomic) id <HAP2EncodedRequest> executeRequest; // @synthesize executeRequest=_executeRequest;
- (void)_parseExecuteResponseData:(id)arg1;	// IMP=0x0000000000071938
- (void)_sendExecuteRequest;	// IMP=0x00000000000716cf
- (void)_parsePrepareResponseData:(id)arg1;	// IMP=0x00000000000715af
- (void)_sendPrepareRequest;	// IMP=0x0000000000071398
- (void)_cleanUp;	// IMP=0x0000000000071362
- (void)_parseResponseData:(id)arg1;	// IMP=0x00000000000712ae
- (void)_sendRequest;	// IMP=0x000000000007129c
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 prepareRequest:(id)arg5 executeRequest:(id)arg6 endpoint:(id)arg7 mimeType:(id)arg8 timeout:(double)arg9 options:(unsigned long long)arg10;	// IMP=0x00000000000711f3

@end

