//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUGZipFileInputStream : NSObject
{
    int _fd;	// 8 = 0x8
    struct gzFile_s *_file;	// 16 = 0x10
    _Bool _isCachingDisabled;	// 24 = 0x18
    long long _offset;	// 32 = 0x20
}

- (id)closeLocalStream;	// IMP=0x000000000028f930
- (void)close;	// IMP=0x000000000028f8e3
- (void)enableSystemCaching;	// IMP=0x000000000028f890
- (void)disableSystemCaching;	// IMP=0x000000000028f83a
- (void)seekToOffset:(long long)arg1;	// IMP=0x000000000028f811
- (_Bool)canSeek;	// IMP=0x000000000028f809
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000028f6dc
- (long long)offset;	// IMP=0x000000000028f6d2
- (void)dealloc;	// IMP=0x000000000028f694
- (id)initWithPath:(id)arg1;	// IMP=0x000000000028f5d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
