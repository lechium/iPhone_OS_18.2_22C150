//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXStyleMatrix : NSObject
{
}

+ (id)readReferenceFromNode:(struct _xmlNode *)arg1;	// IMP=0x0080000000191aac
+ (_Bool)readReferenceFromParentNode:(struct _xmlNode *)arg1 name:(const char *)arg2 inNamespace:(id)arg3 color:(id *)arg4 index:(unsigned int *)arg5;	// IMP=0x00800000001c6069
+ (void)readFromNode:(struct _xmlNode *)arg1 toStyleMatrix:(id)arg2 packagePart:(id)arg3 drawingState:(id)arg4;	// IMP=0x0080000000024bd3

@end
