//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString, NSURL;

@interface _TtC12SmartReplies28SRSmartRepliesActionMetadata : NSObject
{
    MISSING_TYPE *type;	// 8 = 0x8
    MISSING_TYPE *title;	// 16 = 0x10
    MISSING_TYPE *attribution;	// 32 = 0x20
    MISSING_TYPE *stringRepresentation;	// 48 = 0x30
    MISSING_TYPE *date;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *hasRichActionType;	// 0 = 0x0
    MISSING_TYPE *url;	// 9280 = 0x2440
    MISSING_TYPE *locationLatitude;	// 422989 = 0x6744d
    MISSING_TYPE *locationLongitude;	// 9280 = 0x2440
    MISSING_TYPE *imageName;	// 0 = 0x0
    MISSING_TYPE *attributionSource;	// 2147484672 = 0x80000400
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000061c52
- (void).cxx_destruct;	// IMP=0x00000000000631c6
- (id)init;	// IMP=0x0000000000063151
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000063087
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000062c4f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006231e
- (id)copyWithZone:(void *)arg1;	// IMP=0x0000000000061e59
- (id)initWithType:(long long)arg1 title:(id)arg2 attribution:(id)arg3 stringRepresentation:(id)arg4 date:(id)arg5 hasRichActionType:(_Bool)arg6 url:(id)arg7 locationLatitude:(double)arg8 locationLongitude:(double)arg9 imageName:(id)arg10 attributionSource:(long long)arg11;	// IMP=0x0000000000061a8d
@property(nonatomic, readonly) long long attributionSource; // @synthesize attributionSource;
@property(nonatomic, readonly) NSString *imageName;
@property(nonatomic, readonly) double locationLongitude; // @synthesize locationLongitude;
@property(nonatomic, readonly) double locationLatitude; // @synthesize locationLatitude;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) _Bool hasRichActionType; // @synthesize hasRichActionType;
@property(nonatomic, readonly) NSDate *date;
@property(nonatomic, readonly) NSString *stringRepresentation;
@property(nonatomic, readonly) NSString *attribution;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) long long type; // @synthesize type;

@end
