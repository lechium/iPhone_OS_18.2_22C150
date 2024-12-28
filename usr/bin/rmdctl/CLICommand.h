//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CLICommand : NSObject
{
    _Bool _successfulExit;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSArray *_aliases;	// 24 = 0x18
    NSArray *_options;	// 32 = 0x20
    NSString *_shortEnglishDescription;	// 40 = 0x28
    NSString *_longEnglishDescription;	// 48 = 0x30
    NSString *_usageLine;	// 56 = 0x38
    CDUnknownBlockType _executionBlock;	// 64 = 0x40
}

+ (_Bool)enabled;	// IMP=0x00200000000184eb
+ (id)registeredCommandWithName:(id)arg1;	// IMP=0x001000000001a339
+ (id)registeredCommandNames;	// IMP=0x001000000001a320
- (void).cxx_destruct;	// IMP=0x0020000000018aa3
@property(copy, nonatomic) CDUnknownBlockType executionBlock; // @synthesize executionBlock=_executionBlock;
- (CDUnknownBlockType);	// IMP=0x0010000000018a8a
@property(copy, nonatomic) NSString *usageLine; // @synthesize usageLine=_usageLine;
@property(copy, nonatomic) NSString *longEnglishDescription; // @synthesize longEnglishDescription=_longEnglishDescription;
@property(copy, nonatomic) NSString *shortEnglishDescription; // @synthesize shortEnglishDescription=_shortEnglishDescription;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSArray *aliases; // @synthesize aliases=_aliases;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)endRunLoopWithSuccess:(_Bool)arg1;	// IMP=0x00100000000189ad
- (_Bool)startRunLoop;	// IMP=0x0010000000018962
- (unsigned long long)hash;	// IMP=0x001000000001891e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000018850
- (id)nameSummaryString;	// IMP=0x0010000000018775
- (_Bool)runWithOptions:(id)arg1;	// IMP=0x0010000000018638
- (id)description;	// IMP=0x00100000000184f3
- (void)register;	// IMP=0x001000000001a352

@end
