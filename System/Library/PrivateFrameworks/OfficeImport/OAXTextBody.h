//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextBody : NSObject
{
}

+ (id)stringWithTextAnchorType:(unsigned char)arg1;	// IMP=0x00800000002fb34e
+ (id)stringWithTextBodyWrapType:(unsigned char)arg1;	// IMP=0x00800000002fb326
+ (id)stringWithTextBodyFlowType:(unsigned char)arg1;	// IMP=0x00800000002fb304
+ (id)stringWithTextBodyHorizontalOverflowType:(unsigned char)arg1;	// IMP=0x00800000002fb2ea
+ (id)stringWithTextBodyVerticalOverflowType:(unsigned char)arg1;	// IMP=0x00800000002fb2c2
+ (unsigned char)readHorizontalOverflowType:(id)arg1;	// IMP=0x0080000000218351
+ (unsigned char)readAnchorType:(id)arg1;	// IMP=0x0080000000193e7a
+ (unsigned char)readFlowType:(id)arg1;	// IMP=0x00800000001c7509
+ (void)readTextBodyProperties:(struct _xmlNode *)arg1 textBodyProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x0080000000193602
+ (void)readTextBodyFromXmlNode:(struct _xmlNode *)arg1 textBody:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000001c71df
+ (void)writeTextBodyAutoFit:(id)arg1 to:(id)arg2;	// IMP=0x00800000002fb370
+ (void)readHorizontalOverflowType:(id)arg1 textBodyProperties:(id)arg2;	// IMP=0x0080000000239256
+ (void)readVerticalOverflowType:(id)arg1 textBodyProperties:(id)arg2;	// IMP=0x00800000002338da
+ (void)readWrapType:(id)arg1 textBodyProperties:(id)arg2;	// IMP=0x0080000000195d59
+ (void)readFlowType:(id)arg1 textBodyProperties:(id)arg2;	// IMP=0x00800000001c747e

@end
