//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSUUID;

@interface _TtC13TranslationUI23VisualTranslationResult : NSObject
{
    MISSING_TYPE *uuid;	// 1935892319 = 0x73635f5f
    MISSING_TYPE *string;	// 103 = 0x67
    MISSING_TYPE *isPassthrough;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *topLeft;	// 0 = 0x0
    MISSING_TYPE *topRight;	// 963344 = 0xeb310
    MISSING_TYPE *bottomLeft;	// 12808 = 0x3208
    MISSING_TYPE *bottomRight;	// 963344 = 0xeb310
}

- (void).cxx_destruct;	// IMP=0x00000000000b5b80
- (id)init;	// IMP=0x00000000000b59f0
@property(nonatomic, readonly) struct CGPoint bottomRight; // @synthesize bottomRight;
@property(nonatomic, readonly) struct CGPoint bottomLeft; // @synthesize bottomLeft;
@property(nonatomic, readonly) struct CGPoint topRight; // @synthesize topRight;
@property(nonatomic, readonly) struct CGPoint topLeft; // @synthesize topLeft;
@property(nonatomic, readonly) _Bool isPassthrough; // @synthesize isPassthrough;
@property(nonatomic, readonly) NSString *string;
@property(nonatomic, readonly) NSUUID *uuid;

@end

