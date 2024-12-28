//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NADAppSerializer : NSObject
{
    NSString *_fileName;	// 8 = 0x8
    Class _entityClass;	// 16 = 0x10
}

+ (id)applicationSerializer;	// IMP=0x0040000000007c2c
- (void).cxx_destruct;	// IMP=0x00200000000080bb
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (_Bool)setVersion:(unsigned long long)arg1 forApplicationAtURL:(id)arg2;	// IMP=0x0010000000008059
- (unsigned long long)versionForApplicationAtURL:(id)arg1;	// IMP=0x0010000000008009
- (id)objectAtDirectory:(id)arg1;	// IMP=0x0010000000007e46
- (_Bool)persistObject:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000007d66
- (id)URLForFileInDirectory:(id)arg1;	// IMP=0x0010000000007cec
- (id)initWithDefaultFileName:(id)arg1 entityClass:(Class)arg2;	// IMP=0x0010000000007c6e

@end
