//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface WDBookmark
{
    NSString *mName;	// 8 = 0x8
    int mBookmarkType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003e35dc
- (id)description;	// IMP=0x00000000003e359e
- (void)setBookmarkType:(int)arg1;	// IMP=0x00000000001a38e7
- (int)bookmarkType;	// IMP=0x00000000000fd04e
- (int)runType;	// IMP=0x00000000000f525a
- (void)setName:(id)arg1;	// IMP=0x00000000001a38f7
- (id)name;	// IMP=0x00000000000f5270
- (id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3;	// IMP=0x00000000000de6e9

@end
