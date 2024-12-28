//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class LKUser;

@interface LUIFetchUserImageOperation : CATOperation
{
    LKUser *_user;	// 8 = 0x8
    unsigned long long _imageSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000458e1
@property(nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) LKUser *user; // @synthesize user=_user;
- (void)fetchImage;	// IMP=0x0010000000045468
- (void)main;	// IMP=0x0010000000045456
- (_Bool)isAsynchronous;	// IMP=0x001000000004544e
- (id)initWithUser:(id)arg1 imageSize:(unsigned long long)arg2;	// IMP=0x00100000000453ce

@end
