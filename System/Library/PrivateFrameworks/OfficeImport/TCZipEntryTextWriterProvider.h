//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OISFUZipArchiveOutputStream;

__attribute__((visibility("hidden")))
@interface TCZipEntryTextWriterProvider
{
    _Bool _isCompressed;	// 16 = 0x10
    NSString *_entryName;	// 24 = 0x18
    OISFUZipArchiveOutputStream *_outputStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002e8457
@property(readonly, nonatomic) _Bool isCompressed; // @synthesize isCompressed=_isCompressed;
@property(readonly, nonatomic) OISFUZipArchiveOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, copy, nonatomic) NSString *entryName; // @synthesize entryName=_entryName;
- (_Bool)setUp;	// IMP=0x00000000002e83a9
- (id)initWithEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(_Bool)arg3;	// IMP=0x00000000002e82c6

@end

