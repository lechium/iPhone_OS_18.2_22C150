//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDTComputedFormatSpec;

@interface GQDTDateCell
{
    struct __CFDate *mDate;	// 24 = 0x18
    GQDTComputedFormatSpec *mComputedFormat;	// 32 = 0x20
}

- (struct __CFString *)createStringValue;	// IMP=0x0000000000013dae
- (struct __CFString *)getDateFormat;	// IMP=0x0000000000013d70
- (struct __CFDate *)date;	// IMP=0x0000000000013d5f
- (void)dealloc;	// IMP=0x0000000000013d08
- (int)readAttributesForDateCell:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x0000000000013f02

@end
