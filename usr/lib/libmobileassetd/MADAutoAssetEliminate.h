//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, MADAutoAssetClientRequest, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MADAutoAssetEliminate : NSObject
{
    _Bool _eliminatingSet;	// 8 = 0x8
    _Bool _awaitingUnlocked;	// 9 = 0x9
    _Bool _awaitingSchedulerAck;	// 10 = 0xa
    _Bool _awaitingCancelActivityAck;	// 11 = 0xb
    _Bool _awaitingStagerAck;	// 12 = 0xc
    _Bool _limitedToCancelActivity;	// 13 = 0xd
    int _awaitingSecureOperations;	// 16 = 0x10
    MADAutoAssetClientRequest *_clientRequest;	// 24 = 0x18
    MAAutoAssetSelector *_assetSelector;	// 32 = 0x20
    NSString *_clientDomainName;	// 40 = 0x28
    NSString *_assetSetIdentifier;	// 48 = 0x30
    NSMutableArray *_downloadedSetDescriptors;	// 56 = 0x38
    NSMutableDictionary *_activeJobsByUUID;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003de59
- (void).cxx_destruct;	// IMP=0x000000000003e3f9
@property(nonatomic) _Bool limitedToCancelActivity; // @synthesize limitedToCancelActivity=_limitedToCancelActivity;
@property(retain, nonatomic) NSMutableDictionary *activeJobsByUUID; // @synthesize activeJobsByUUID=_activeJobsByUUID;
@property(nonatomic) int awaitingSecureOperations; // @synthesize awaitingSecureOperations=_awaitingSecureOperations;
@property(nonatomic) _Bool awaitingStagerAck; // @synthesize awaitingStagerAck=_awaitingStagerAck;
@property(nonatomic) _Bool awaitingCancelActivityAck; // @synthesize awaitingCancelActivityAck=_awaitingCancelActivityAck;
@property(nonatomic) _Bool awaitingSchedulerAck; // @synthesize awaitingSchedulerAck=_awaitingSchedulerAck;
@property(nonatomic) _Bool awaitingUnlocked; // @synthesize awaitingUnlocked=_awaitingUnlocked;
@property(retain, nonatomic) NSMutableArray *downloadedSetDescriptors; // @synthesize downloadedSetDescriptors=_downloadedSetDescriptors;
@property(nonatomic) _Bool eliminatingSet; // @synthesize eliminatingSet=_eliminatingSet;
@property(readonly, retain, nonatomic) NSString *assetSetIdentifier; // @synthesize assetSetIdentifier=_assetSetIdentifier;
@property(readonly, retain, nonatomic) NSString *clientDomainName; // @synthesize clientDomainName=_clientDomainName;
@property(readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector; // @synthesize assetSelector=_assetSelector;
@property(readonly, retain, nonatomic) MADAutoAssetClientRequest *clientRequest; // @synthesize clientRequest=_clientRequest;
- (id)summary;	// IMP=0x000000000003de73
- (id)description;	// IMP=0x000000000003de61
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003dbe6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003d889
- (id)initWithClientRequest:(id)arg1 withAssetSelector:(id)arg2 forClientDomain:(id)arg3 forSetIdentifier:(id)arg4 withDownloadedSetDescriptors:(id)arg5 awaitingUnlocked:(_Bool)arg6;	// IMP=0x000000000003d231
- (id)initWithAssetSelector:(id)arg1;	// IMP=0x000000000003d20b
- (id)initWithClientRequest:(id)arg1;	// IMP=0x000000000003d1e8

@end
