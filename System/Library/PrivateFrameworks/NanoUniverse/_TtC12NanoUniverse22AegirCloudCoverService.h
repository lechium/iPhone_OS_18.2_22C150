//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSURL;
@protocol NUNIFileConverter;

@interface _TtC12NanoUniverse22AegirCloudCoverService : NSObject
{
    MISSING_TYPE *fileConverter;	// 8 = 0x8
    MISSING_TYPE *disableFetch;	// 16 = 0x10
    MISSING_TYPE *directory;	// 0 = 0x0
    MISSING_TYPE *configuration;	// 0 = 0x0
    MISSING_TYPE *refreshTimeIntervalInSeconds;	// 0 = 0x0
    MISSING_TYPE *imageScale;	// 0 = 0x0
    MISSING_TYPE *privateQueue;	// 0 = 0x0
    MISSING_TYPE *startBackoffInterval;	// 0 = 0x0
    MISSING_TYPE *maxBackoffInterval;	// 0 = 0x0
    MISSING_TYPE *dispatchSourceTimer;	// 0 = 0x0
    MISSING_TYPE *operationsInProgress;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *backoffInterval;	// 0 = 0x0
    MISSING_TYPE *session;	// 0 = 0x0
    MISSING_TYPE *authenticator;	// 0 = 0x0
}

+ (id)cloudLevelHighFileName;	// IMP=0x0040000000042ce0
+ (id)cloudLevelMidFileName;	// IMP=0x0040000000042c80
+ (id)cloudLevelLowFileName;	// IMP=0x0040000000042c20
+ (id)cloudLevelPrefix;	// IMP=0x0040000000042bd0
- (void).cxx_destruct;	// IMP=0x0000000000042b00
- (id)init;	// IMP=0x0000000000042aa0
@property(nonatomic, readonly) _Bool canFetchData;
- (id)cloudTextureURLs;	// IMP=0x000000000003a580
- (void)retrieveCloudTextureURLsWithNotifyOn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a0e0
- (id)initWithImageScale:(float)arg1;	// IMP=0x00000000000397b0
@property(nonatomic, copy) NSURL *directory;
@property(nonatomic) _Bool disableFetch; // @synthesize disableFetch;
@property(nonatomic, retain) id <NUNIFileConverter> fileConverter; // @synthesize fileConverter;
@property(nonatomic, readonly) NSArray *allCloudLevelFileNames;
- (id)currentURLForCloudLevelWith:(id)arg1;	// IMP=0x00000000000431a0
- (id)urlForCloudLevelWith:(id)arg1;	// IMP=0x0000000000042e30

@end

