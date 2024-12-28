//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAutoAssetHistoryTracker : NSObject
{
    _Bool _loadedFromPersistedState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_protectionQueue;	// 16 = 0x10
    long long _historyType;	// 24 = 0x18
    long long _currentBucketFileIndex;	// 32 = 0x20
    long long _currentBucketFilesystemBytes;	// 40 = 0x28
    long long _maximumBucketFilesystemBytes;	// 48 = 0x30
}

+ (id)newBucketFilename:(long long)arg1 forBucketIndex:(long long)arg2;	// IMP=0x00100000000c2244
+ (id)nameForHistoryType:(long long)arg1;	// IMP=0x00100000000c2067
+ (id)selectorNameForSelector:(id)arg1;	// IMP=0x00100000000c1e81
+ (id)paddedNameForErrorCode:(id)arg1;	// IMP=0x00100000000c1d71
+ (id)paddedNameForErrorDomain:(id)arg1;	// IMP=0x00100000000c1c14
+ (id)paddedNameForClient:(id)arg1;	// IMP=0x00100000000c1b35
+ (id)paddedNameForHistoryLayer:(long long)arg1;	// IMP=0x00100000000c1a5c
+ (id)operationName:(long long)arg1;	// IMP=0x00100000000c0f1c
+ (id)currentTime;	// IMP=0x00100000000c0e9a
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000bde45
- (void).cxx_destruct;	// IMP=0x00000000000c249a
@property(nonatomic) long long maximumBucketFilesystemBytes; // @synthesize maximumBucketFilesystemBytes=_maximumBucketFilesystemBytes;
@property(nonatomic) long long currentBucketFilesystemBytes; // @synthesize currentBucketFilesystemBytes=_currentBucketFilesystemBytes;
@property(nonatomic) long long currentBucketFileIndex; // @synthesize currentBucketFileIndex=_currentBucketFileIndex;
@property(nonatomic) _Bool loadedFromPersistedState; // @synthesize loadedFromPersistedState=_loadedFromPersistedState;
@property(readonly, nonatomic) long long historyType; // @synthesize historyType=_historyType;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *protectionQueue; // @synthesize protectionQueue=_protectionQueue;
- (id)summary;	// IMP=0x00000000000c2309
- (id)description;	// IMP=0x00000000000c22f7
- (id)historyTypeName;	// IMP=0x00000000000c21da
- (id)newBucketIndexFilename;	// IMP=0x00000000000c2104
- (long long)recordFormattedHistoryEntry:(id)arg1 toBucketFilename:(id)arg2 settingCurrentBucketBytes:(_Bool)arg3;	// IMP=0x00000000000c06a5
- (void)verifyAllOtherBucketFilesExist;	// IMP=0x00000000000c0127
- (void)createEmptyBucketFileForIndex:(long long)arg1 settingCurrentBucketBytes:(_Bool)arg2;	// IMP=0x00000000000bffbe
- (void)createBucketIndexFile;	// IMP=0x00000000000bfd3e
- (void)loadBucketIndex;	// IMP=0x00000000000bf7f5
- (_Bool)makeSureHistoryDirectoryExists;	// IMP=0x00000000000bf65f
- (void)recordHistoryEntry:(long long)arg1 toHistoryType:(long long)arg2 fromClient:(id)arg3 fromLayer:(long long)arg4 forAssetID:(id)arg5 withSelector:(id)arg6 usageCount:(long long)arg7 configuredCount:(long long)arg8 requestedCount:(long long)arg9 fromPallasCount:(long long)arg10 vendingCount:(long long)arg11 forClientDomainName:(id)arg12 forAssetSetIdentifier:(id)arg13 forAtomicInstance:(id)arg14 withAddendumMessage:(id)arg15 failingWithError:(id)arg16;	// IMP=0x00000000000be5d3
- (void)loadPersistedState;	// IMP=0x00000000000bde4d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bdd65
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bdc7c
- (id)initForHistoryType:(long long)arg1 withMaximumFilesystemBytes:(long long)arg2 usingProtectionQueue:(id)arg3;	// IMP=0x00000000000bdbd0

@end
