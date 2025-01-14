//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TCMessageEntry : NSObject
{
    unsigned long long m_timeStamp;	// 8 = 0x8
    int m_tag;	// 16 = 0x10
    NSString *m_text;	// 24 = 0x18
    NSArray *m_parameters;	// 32 = 0x20
    NSMutableArray *m_affectedObjects;	// 40 = 0x28
    int m_count;	// 48 = 0x30
    NSString *additionalText;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x00600000002d52f3
- (void).cxx_destruct;	// IMP=0x00000000002d5946
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=m_timeStamp;
@property(copy, nonatomic) NSString *additionalText; // @synthesize additionalText;
- (void)addAffectedObject:(id)arg1;	// IMP=0x00000000002d58a6
- (void)mergeEntries:(id)arg1;	// IMP=0x00000000002d57cf
- (id)description;	// IMP=0x00000000002d5780
- (long long)timeStampCompare:(id)arg1;	// IMP=0x00000000002d5762
- (int)getCount;	// IMP=0x00000000002d5759
- (id)affectedObjects;	// IMP=0x00000000002d574b
- (id)getParameter:(unsigned int)arg1;	// IMP=0x00000000002d56fd
- (unsigned long long)getParameterCount;	// IMP=0x00000000002d56e7
- (id)getAdditionalText;	// IMP=0x00000000002d56d5
- (id)getMessageText;	// IMP=0x00000000002d56c7
- (int)getMessageTag;	// IMP=0x00000000002d56be
- (unsigned long long)hash;	// IMP=0x00000000002d5699
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d5539
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(struct __va_list_tag [1])arg4;	// IMP=0x00000000002d533f

@end

