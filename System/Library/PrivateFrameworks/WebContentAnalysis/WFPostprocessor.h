//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFPostprocessor : NSObject
{
}

+ (id)adultWebSiteTagging:(id)arg1;	// IMP=0x0080000000005735
+ (id)normalizeStrippedHTML:(id)arg1;	// IMP=0x00800000000056be
+ (id)lightweightStripHTMLTags:(id)arg1;	// IMP=0x00800000000055f5
+ (id)lightweightStripHTMLTagsForLine:(id)arg1;	// IMP=0x00800000000054cd
+ (id)postprocessPlainTextWebPage:(id)arg1;	// IMP=0x008000000000545c
+ (struct _NSRange)rangeOfFirstHTMLTag:(id)arg1 searchRange:(struct _NSRange)arg2;	// IMP=0x00800000000053ac

@end

