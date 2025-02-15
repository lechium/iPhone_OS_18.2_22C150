//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface BAContentRequestTelemetry : NSObject
{
    int _essentialAssetsCount;	// 8 = 0x8
    int _optionalAssetsCount;	// 12 = 0xc
    int _failureCount;	// 16 = 0x10
    int _successCount;	// 20 = 0x14
    long long _contentRequest;	// 24 = 0x18
    long long _installSource;	// 32 = 0x20
    _Bool _invalid;	// 40 = 0x28
    NSString *_applicationIdentifier;	// 48 = 0x30
    NSMutableArray *_fileSizes;	// 56 = 0x38
    NSMutableDictionary *_uniqueErrorCounts;	// 64 = 0x40
    NSMutableSet *_remainingDownloadUniqueIdentifiers;	// 72 = 0x48
    NSDictionary *_eventPayload;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000000628f
@property(retain, nonatomic) NSDictionary *eventPayload; // @synthesize eventPayload=_eventPayload;
@property(retain, nonatomic) NSMutableSet *remainingDownloadUniqueIdentifiers; // @synthesize remainingDownloadUniqueIdentifiers=_remainingDownloadUniqueIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *uniqueErrorCounts; // @synthesize uniqueErrorCounts=_uniqueErrorCounts;
@property(retain, nonatomic) NSMutableArray *fileSizes; // @synthesize fileSizes=_fileSizes;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)_formatMostFrequentError;	// IMP=0x0010000000005f6a
- (id)_average:(id)arg1;	// IMP=0x0010000000005dad
- (id)_median:(id)arg1;	// IMP=0x0010000000005c70
- (id)description;	// IMP=0x0010000000005b7f
- (id)formatError:(id)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0010000000005acf
- (id)payload;	// IMP=0x0010000000005625
- (id)eventName;	// IMP=0x0010000000005618
- (_Bool)allDownloadsCompleted;	// IMP=0x00100000000055d0
- (void)recordDownloadCompletion:(id)arg1 error:(id)arg2;	// IMP=0x00100000000051b7
- (id)initWithContentRequest:(long long)arg1 applicationIdentifier:(id)arg2 installSource:(long long)arg3 downloads:(id)arg4;	// IMP=0x0010000000004ef4

@end

