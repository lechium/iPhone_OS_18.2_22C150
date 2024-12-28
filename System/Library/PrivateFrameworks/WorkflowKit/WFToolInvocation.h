//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LNAction, MISSING_TYPE, NSString, WFEncodedTypedValue, WFParameter;
@protocol WFVariableDataSource;

@interface WFToolInvocation : NSObject
{
    MISSING_TYPE *toolInvocation;	// 3 = 0x3
}

+ (void)invocationFrom:(LNAction *)arg1 bundleIdentifier:(NSString *)arg2 deviceIdentifier:(NSString *)arg3 completionHandler:(void (^)(WFToolInvocation *, NSError *))arg4;	// IMP=0x0040000000060d82
+ (id)errorDomain;	// IMP=0x004000000005e01c
- (void).cxx_destruct;	// IMP=0x0000000000063bc1
- (id)init;	// IMP=0x0000000000063b81
- (void)processedValueFromEncodedValue:(WFEncodedTypedValue *)arg1 forParameter:(WFParameter *)arg2 ofClass:(Class)arg3 variableSource:(id <WFVariableDataSource>)arg4 completionHandler:(void (^)(id, NSError *))arg5;	// IMP=0x0000000000062cc2
- (void)valueForParameter:(WFParameter *)arg1 ofClass:(Class)arg2 variableSource:(id <WFVariableDataSource>)arg3 completionHandler:(void (^)(id, NSError *))arg4;	// IMP=0x00000000000627f8
- (id)encodeAndReturnError:(id *)arg1;	// IMP=0x0000000000061278
- (id)options;	// IMP=0x000000000006119f
- (_Bool)containsParameterValueForKey:(id)arg1;	// IMP=0x000000000006106c
- (id)initWithEncodedToolInvocation:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005e505

@end
