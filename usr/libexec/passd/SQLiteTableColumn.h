//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SQLiteTableColumn : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_qualifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000041c583
@property(retain, nonatomic) NSString *qualifiers; // @synthesize qualifiers=_qualifiers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x001000000041c520
- (id)SQL;	// IMP=0x001000000041c465

@end
