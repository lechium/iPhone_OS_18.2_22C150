//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBParagraphProperties : NSObject
{
}

+ (void *)createTrackedPropertiesIfNeeded:(id)arg1;	// IMP=0x00800000003e043f
+ (void)readFrom:(id)arg1 wrdProperties:(void *)arg2 tracked:(void *)arg3 document:(id)arg4 properties:(id)arg5;	// IMP=0x00800000000cf4e7
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;	// IMP=0x00800000003e0426
+ (void)mapWordProperties:(void *)arg1 reader:(id)arg2 toProperties:(id)arg3;	// IMP=0x00800000000cf5d8

@end

