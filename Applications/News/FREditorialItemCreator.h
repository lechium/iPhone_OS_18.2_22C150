//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FREditorialItemThumbnailCreator;

@interface FREditorialItemCreator : NSObject
{
    FREditorialItemThumbnailCreator *_thumbnailCreator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000016acd
@property(readonly, nonatomic) FREditorialItemThumbnailCreator *thumbnailCreator; // @synthesize thumbnailCreator=_thumbnailCreator;
- (id)createEditorialItemFromCachedEntry:(id)arg1;	// IMP=0x0010000000016832
- (id)initWithThumbnailCreator:(id)arg1;	// IMP=0x00100000000167a6
- (id)init;	// IMP=0x0010000000016653

@end

