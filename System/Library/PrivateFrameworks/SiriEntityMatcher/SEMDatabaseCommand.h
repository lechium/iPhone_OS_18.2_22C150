//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SEMDatabaseCommand : NSObject
{
    NSString *_commandString;	// 8 = 0x8
    NSArray *_parameters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e13f
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSString *commandString; // @synthesize commandString=_commandString;
- (_Bool)updateCommandString:(id)arg1;	// IMP=0x000000000001e0fb
- (_Bool)updateParameters:(id)arg1;	// IMP=0x000000000001e072
- (void)replaceParameters:(id)arg1;	// IMP=0x000000000001e045
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001dfc1
- (unsigned long long)hash;	// IMP=0x000000000001df5b
- (_Bool)isEqualToCommand:(id)arg1;	// IMP=0x000000000001ddc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001dd5e
- (id)init;	// IMP=0x000000000001dd16
- (id)description;	// IMP=0x000000000001dc9a
- (id)initWithCommandString:(id)arg1 parameters:(id)arg2;	// IMP=0x000000000001dbe1

@end
