//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation
{
    NSArray *_fetchControllers;	// 8 = 0x8
    unsigned long long _mediaLibraryRevision;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002c8d3d
@property(nonatomic) unsigned long long mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(copy, nonatomic) NSArray *fetchControllers; // @synthesize fetchControllers=_fetchControllers;
- (void)executionDidBegin;	// IMP=0x00000000002c8821
- (id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(unsigned long long)arg2;	// IMP=0x00000000002c8762
- (id)init;	// IMP=0x00000000002c86f3

@end

