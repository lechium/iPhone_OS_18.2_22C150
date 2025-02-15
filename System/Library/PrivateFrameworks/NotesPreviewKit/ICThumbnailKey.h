//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSURL;

@interface ICThumbnailKey : NSObject
{
    MISSING_TYPE *accountId;	// 8 = 0x8
    MISSING_TYPE *objectId;	// 24 = 0x18
    MISSING_TYPE *thumbnailId;	// 40 = 0x28
}

+ (id)recentObjectId;	// IMP=0x00100000000029d0
- (void).cxx_destruct;	// IMP=0x0000000000004580
- (id)init;	// IMP=0x00000000000043c0
@property(nonatomic, readonly) NSURL *imageUrl;
@property(nonatomic, readonly) NSURL *descriptionUrl;
@property(nonatomic, readonly) NSURL *containerUrl;
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000003c90
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000039b0
@property(nonatomic, readonly) NSString *description;
- (id)initWithType:(long long)arg1 accountId:(id)arg2 objectId:(id)arg3 preferredSize:(struct CGSize)arg4 traitCollection:(id)arg5;	// IMP=0x00000000000034a0
- (id)initWithType:(long long)arg1 accountId:(id)arg2 objectId:(id)arg3 preferredSize:(struct CGSize)arg4 scale:(double)arg5 appearance:(unsigned long long)arg6;	// IMP=0x00000000000031d0
- (id)initWithType:(long long)arg1 accountId:(id)arg2 objectId:(id)arg3 preferredSize:(struct CGSize)arg4 scale:(double)arg5 appearance:(unsigned long long)arg6 isRTL:(_Bool)arg7 contentSizeCategory:(id)arg8 hasBoldText:(_Bool)arg9 hasButtonShapes:(_Bool)arg10 hasDarkerSystemColors:(_Bool)arg11 hasBorder:(_Bool)arg12;	// IMP=0x0000000000002f10
- (id)initWithAccountId:(id)arg1 objectId:(id)arg2;	// IMP=0x0000000000002eb0
- (id)initWithAccountId:(id)arg1 objectId:(id)arg2 thumbnailId:(id)arg3;	// IMP=0x0000000000002cd0
@property(nonatomic, readonly) NSString *thumbnailId;
@property(nonatomic, readonly) NSString *objectId;
@property(nonatomic, readonly) NSString *accountId;

@end

