//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDPinPairingDialog_ATV
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSString *_titleKey;	// 24 = 0x18
    NSString *_pinKey;	// 32 = 0x20
    NSString *_messageKey;	// 40 = 0x28
    NSString *_timeoutKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000057aa0
- (void)closeAll;	// IMP=0x001000000005794a
- (void)closeForClient:(id)arg1 userCancelled:(_Bool)arg2;	// IMP=0x001000000005771c
- (void)closeForClient:(id)arg1;	// IMP=0x0010000000057708
- (void)showWithPin:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000005751d
- (void)dealloc;	// IMP=0x00100000000574df
- (id)init;	// IMP=0x0010000000057482

@end
