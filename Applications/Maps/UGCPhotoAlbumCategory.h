//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UGCPhotoAlbumCategory : NSObject
{
    NSString *_albumTitle;	// 8 = 0x8
    unsigned long long _categoryType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000006227f3
@property(readonly, nonatomic) unsigned long long categoryType; // @synthesize categoryType=_categoryType;
@property(readonly, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000622693
- (id)initWithTitle:(id)arg1 categoryType:(unsigned long long)arg2;	// IMP=0x001000000062261c

@end

