//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKKeychain-Protocol.h>

@class NSDictionary;

@interface CRKConcreteKeychain : NSObject <CRKKeychain>
{
    NSDictionary *_baseQueryAttributes;
}

+ (id)defaultKeychain;
@property(readonly, copy, nonatomic) NSDictionary *baseQueryAttributes; // @synthesize baseQueryAttributes=_baseQueryAttributes;
// - (void).cxx_destruct;
- (id)description;
- (id)addItem:(void )arg1 toAccessGroup:(id)arg2;
- (id)makeItemWithPersistentID:(id)arg1 expectedTypeID:(NSUInteger)arg2 creationBlock:(id /* CDUnknownBlockType */)arg3;
- (const void )copyItemWithPersistentID:(id)arg1;
- (void)removeItemWithPersistentID:(id)arg1;
- (id)makePrivateKeyWithData:(id)arg1;
- (id)makeCertificateWithData:(id)arg1;
- (id)makeIdentityWithConfiguration:(id)arg1;
- (id)makeIdentityWithCertificate:(id)arg1 privateKey:(id)arg2;
- (id)privateKeyWithPersistentID:(id)arg1;
- (id)identityWithPersistentID:(id)arg1;
- (id)certificateWithPersistentID:(id)arg1;
- (id)addPrivateKey:(id)arg1 toAccessGroup:(id)arg2;
- (id)addIdentity:(id)arg1 toAccessGroup:(id)arg2;
- (id)addCertificate:(id)arg1 toAccessGroup:(id)arg2;
- (id)initWithBaseQueryAttributes:(id)arg1;

@end
