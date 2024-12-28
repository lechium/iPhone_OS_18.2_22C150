//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TPFileStorageManager : NSObject
{
    _Bool _hasClearedLegacyStorage;	// 8 = 0x8
    NSURL *_urlForFileSystem;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x006000000001e78e
- (void).cxx_destruct;	// IMP=0x000000000001fedd
@property(nonatomic) _Bool hasClearedLegacyStorage; // @synthesize hasClearedLegacyStorage=_hasClearedLegacyStorage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)deleteStorageAtURLs:(id)arg1;	// IMP=0x000000000001faed
- (void)clearLegacyStorageIfNecessary;	// IMP=0x000000000001fa1f
- (id)urlsForLegacyFileSystem;	// IMP=0x000000000001f65b
@property(readonly, nonatomic) NSURL *urlForFileSystem; // @synthesize urlForFileSystem=_urlForFileSystem;
- (void)localeChanged;	// IMP=0x000000000001f1b5
- (id)imageWithName:(id)arg1;	// IMP=0x000000000001ec93
- (void)saveImage:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001e942
- (void)dealloc;	// IMP=0x000000000001e8cd
- (id)init;	// IMP=0x000000000001e813

@end
