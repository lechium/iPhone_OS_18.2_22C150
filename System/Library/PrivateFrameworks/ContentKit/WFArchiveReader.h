//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFArchiveReader : NSObject
{
    struct archive *_archive;	// 8 = 0x8
}

@property(readonly, nonatomic) struct archive *archive; // @synthesize archive=_archive;
- (id)extractArchiveToDestinationURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000acab0
- (id)initWithArchiveFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ac717

@end
