//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : NSObject
{
}

+ (void)readCharacterProperties:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000001950f2
+ (id)stringWithUnderlineType:(unsigned char)arg1;	// IMP=0x00800000002fb88d
+ (id)stringWithStrikeThroughType:(unsigned char)arg1;	// IMP=0x00800000002fb86b
+ (id)stringWithCapsType:(unsigned char)arg1;	// IMP=0x00800000002fb849
+ (void)readFont:(struct _xmlNode *)arg1 characterProperties:(id)arg2;	// IMP=0x00800000001c4627
+ (void)readFormatting:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000002fb660
+ (unsigned char)readUnderlineType:(id)arg1;	// IMP=0x00800000002fb5c5
+ (id)oaxUnderlineMap;	// IMP=0x00800000002fb511

@end
