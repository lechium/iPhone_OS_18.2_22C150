//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUPairedPeer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CUHomeKitFindPairedPeerContext : NSObject
{
    _Bool _triedAccessory;	// 8 = 0x8
    _Bool _triedHAP;	// 9 = 0x9
    _Bool _triedHomeRepairFlow;	// 10 = 0xa
    CDUnknownBlockType _completion;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
    CUPairedPeer *_pairedPeer;	// 40 = 0x28
    unsigned long long _startTicks;	// 48 = 0x30
    NSArray *_users;	// 56 = 0x38
    unsigned long long _userIndex;	// 64 = 0x40
    unsigned long long _userCount;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000004ede4
@property(nonatomic) unsigned long long userCount; // @synthesize userCount=_userCount;
@property(nonatomic) unsigned long long userIndex; // @synthesize userIndex=_userIndex;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(nonatomic) unsigned long long startTicks; // @synthesize startTicks=_startTicks;
@property(nonatomic) _Bool triedHomeRepairFlow; // @synthesize triedHomeRepairFlow=_triedHomeRepairFlow;
@property(nonatomic) _Bool triedHAP; // @synthesize triedHAP=_triedHAP;
@property(nonatomic) _Bool triedAccessory; // @synthesize triedAccessory=_triedAccessory;
@property(retain, nonatomic) CUPairedPeer *pairedPeer; // @synthesize pairedPeer=_pairedPeer;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end

