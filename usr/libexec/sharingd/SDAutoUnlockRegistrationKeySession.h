//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SDAutoUnlockRegistrationKeySession
{
    _Bool _locallyGenerated;	// 8 = 0x8
    NSData *_requestData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000142d02
@property(nonatomic, getter=isLocallyGenerated) _Bool locallyGenerated; // @synthesize locallyGenerated=_locallyGenerated;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
- (void)transport:(id)arg1 didReceiveMessageACKForIdentifier:(id)arg2;	// IMP=0x0010000000142cb7
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x0010000000142b66
- (void)handleStepData:(id)arg1;	// IMP=0x00100000001427ad
- (void)sendStepData:(id)arg1 type:(unsigned short)arg2 errorCode:(long long)arg3;	// IMP=0x0010000000142545
- (void)onQueue_start;	// IMP=0x001000000014212f
- (void)start;	// IMP=0x00100000001420a8

@end

