//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MinMessageItem : NSObject
{
    NSDate *_date;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000032ea
@property(readonly) NSString *text; // @synthesize text=_text;
@property(readonly) NSDate *date; // @synthesize date=_date;
- (id)initWith:(id)arg1 andText:(id)arg2;	// IMP=0x0010000000003230

@end
