//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUImageWriter : NSObject
{
}

- (id)encodedModelFromAnnotationsController:(id)arg1 encrypt:(_Bool)arg2;	// IMP=0x0000000000028d54
- (_Bool)writeUsingBaseImage:(id)arg1 withAnnotationsFromController:(id)arg2 asImageOfType:(id)arg3 toConsumer:(struct CGDataConsumer *)arg4 embedSourceImageAndAnnotationsAsMetadata:(_Bool)arg5 encryptPrivateMetadata:(_Bool)arg6 error:(id *)arg7;	// IMP=0x00000000000279b7

@end

