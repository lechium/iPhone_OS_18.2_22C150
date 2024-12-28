//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, NSData, NSString, NSURL, UIImage;

@protocol IMImageDataProtocol <NSObject>
+ (_Bool)supportsASTC;
+ (NSString *)UTITypeForData:(NSData *)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) long long orientation;
@property(readonly, copy, nonatomic) NSString *MIMEType;
@property(readonly, copy, nonatomic) NSString *UTIType;
@property(readonly, nonatomic) struct CGSize pxSize;
@property(readonly, nonatomic) struct CGSize ptSize;
@property(readonly, nonatomic) NSData *data;
- (UIImage *)thumbnailAtIndex:(unsigned long long)arg1 fillToSize:(struct CGSize)arg2 maxCount:(unsigned long long)arg3;
- (NSArray *)thumbnailsFillToSize:(struct CGSize)arg1 maxCount:(unsigned long long)arg2;
- (NSArray *)thumbnailsFitToSize:(struct CGSize)arg1 maxCount:(unsigned long long)arg2;
- (NSArray *)durationsWithMaxCount:(unsigned long long)arg1;
- (UIImage *)thumbnailFillToSizeCropping:(struct CGSize)arg1;
- (UIImage *)thumbnailFillToSize:(struct CGSize)arg1;
- (UIImage *)thumbnailFitToSize:(struct CGSize)arg1;
- (id)initWithURL:(NSURL *)arg1;
- (id)initWithData:(NSData *)arg1;
@end
