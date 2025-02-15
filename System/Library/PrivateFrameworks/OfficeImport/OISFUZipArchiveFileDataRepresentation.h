//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OISFUFileDataRepresentation;

__attribute__((visibility("hidden")))
@interface OISFUZipArchiveFileDataRepresentation
{
    OISFUFileDataRepresentation *mFileRepresentation;	// 32 = 0x20
    int mFd;	// 40 = 0x28
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;	// IMP=0x0000000000293590
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;	// IMP=0x000000000029347f
- (id)path;	// IMP=0x0000000000293462
- (_Bool)hasSameLocationAs:(id)arg1;	// IMP=0x00000000002933b9
- (id)inputStream;	// IMP=0x000000000029339c
- (_Bool)isEncrypted;	// IMP=0x0000000000293394
- (long long)dataLength;	// IMP=0x0000000000293377
- (_Bool)isReadable;	// IMP=0x000000000029335a
- (void)dealloc;	// IMP=0x000000000029324f
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000293168

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

