//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVDrawable : NSObject
{
}

+ (struct CGRect)readCoordBounds:(struct _xmlNode *)arg1;	// IMP=0x008000000021ced9
+ (void)readFromDrawable:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;	// IMP=0x00800000001b11ef
+ (id)readDrawablesFromParent:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;	// IMP=0x00800000001b0420
+ (id)readDrawableFromNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;	// IMP=0x00800000001b0554
+ (struct _xmlDoc *)vmlDocumentFromPart:(id)arg1;	// IMP=0x00800000001d98af

@end

