//
//  NSData+SM_EncryptionHelper.h
//
//  Created by keith xi on 10/20/16.
//  Copyright © 2016 Keith. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (SM_EncryptionHelper)

- (NSData *)aesDecryptWithKey:(NSData *)key andIV:(NSData *)iv;

- (NSData *)aesEncryptWithKey:(NSData *)key andIV:(NSData *)iv;

- (NSData *)aesEncryptWithPassworkd:(NSString *)password salt:(NSData *)salt;

- (NSData *)aesDecryptWithPassword:(NSString *)password salt:(NSData *)salt;

@end
