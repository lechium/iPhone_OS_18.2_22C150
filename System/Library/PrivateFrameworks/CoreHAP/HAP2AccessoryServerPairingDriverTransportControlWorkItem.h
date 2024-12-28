//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerPairingDriverTransportControlWorkItem
{
    _Bool _connect;	// 8 = 0x8
    NSError *_cancelError;	// 16 = 0x10
}

+ (id)closeConnection;	// IMP=0x00600000001c9cc8
+ (id)openConnection;	// IMP=0x00600000001c9ca1
- (void).cxx_destruct;	// IMP=0x00000000001c9ad2
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(readonly, nonatomic) _Bool connect; // @synthesize connect=_connect;
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000001c99a1
- (void)_finishWithError:(id)arg1;	// IMP=0x00000000001c98fe
- (void)runForPairingDriver:(id)arg1;	// IMP=0x00000000001c97d9
- (id)initForClosing;	// IMP=0x00000000001c97c5
- (id)initForOpening;	// IMP=0x00000000001c97ae
- (id)initWithConnect:(_Bool)arg1;	// IMP=0x00000000001c976c

@end
